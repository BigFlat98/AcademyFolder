pd = {'1':'1-1','2':'2-2','3':['3-1','3-2','3-3']}
print(pd['3'])
print()
print(pd.values())
for k,v in pd.items() : #자주 써야 할 듯
    print(f"key={k}, value={v}")