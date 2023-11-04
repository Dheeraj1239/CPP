#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include "ProductType.h"
class Product
{
private:
    std::string _productId;
    ProductType _productType;
    float _productPrice;
    std::string _productBrand;

public:
    Product() = default;
    Product(
        std::string _productId,
        ProductType _productType,
        float _productPrice,
        std::string _productBrand);
    ~Product() {

        std::cout<<"Product destroyed"<<std::endl;
    }

    std::string productId() const { return _productId; }
    void setProductId(const std::string &productId) { _productId = productId; }

    ProductType productType() const { return _productType; }
    void setProductType(const ProductType &productType) { _productType = productType; }

    float productPrice() const { return _productPrice; }
    void setProductPrice(float productPrice) { _productPrice = productPrice; }

    std::string productBrand() const { return _productBrand; }
    void setProductBrand(const std::string &productBrand) { _productBrand = productBrand; }

    
};

#endif // PRODUCT_H
