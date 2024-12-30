INCLUDE Irvine32.inc

.code
asmfunc PROC arr:PTR DWORD, base:PTR DWORD
    mov esi, arr           ;intilaize pointer
    mov ecx, [arr + 4]    
    mov edx, 0           
loop_start:
    cmp ecx, 0           
    je done
    mov eax, [esi]        
    test eax, eax         
    jnz non_zero          
next_element:
    add esi, 4            
    dec ecx               
    jmp loop_start        
non_zero:
    inc edx               
    jmp next_element      
done:
    mov [base], edx       ; Store the result (non-zero count) into base
    ret
asmfunc ENDP
END
