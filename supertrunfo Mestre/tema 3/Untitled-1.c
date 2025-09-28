  
    soma1 = populacao1 + area1 + pontosturisticos1 + pib1 + pibpercapita1 + (1.0 / densidadepopulacional1);
    printf("Soma dos atributos da carta 1: %.2lf\n", soma1);
    soma2 = populacao2 + area2 + pontosturisticos2 + pib2 + pibpercapita2 + (1.0 / densidadepopulacional2);
    printf("Soma dos atributos da carta 2: %.2lf\n", soma2);
        
    if (soma1 > soma2 || soma2 > soma1)
    {   
        soma1 > soma2 ? printf("Carta 1 venceu com soma de atributos\n") : printf("Carta 2 venceu com soma de atributos\n");

    }else{
        
     printf("Carta 2 venceu com soma de atributos\n");
        
    }
    
    //soma2 = populacao2 + area2 + pontosturisticos2 + pib2 + pibpercapita2 + (1.0 / densidadepopulacional2);  
    //printf("Soma dos atributos da carta 2: %.2f\n", soma);
    //exibição das comparações no terminal
    return 0;