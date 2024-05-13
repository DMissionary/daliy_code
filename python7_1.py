def showProducts(products):
    for product in products:
        print(product)

def shopping(salary):
    while True:
        choice = input("请输入想买的商品编号（输入0退出）：")
        if choice == '0':
            print("退出程序。")
            break
        elif choice in ['1', '2', '3']:
            product_price = 0
            if choice == '1':
                product_price = 5000
            elif choice == '2':
                product_price = 8000
            elif choice == '3':
                product_price = 800

            if salary > product_price:
                print("购买成功")
                salary -= product_price
                print(f"剩余的钱为：{salary}")
            else:
                print("余额不足。")
                print(f"剩余的钱为：{salary}")

salary = float(input("请输入您的工资："))
products = [(1, "手机", 5000),
            (2, "电脑", 8000),
            (3, "硬盘", 800),
            ]
showProducts(products)
shopping(salary)
