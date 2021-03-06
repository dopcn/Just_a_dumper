//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SKPaymentTransaction, SKProduct;

@interface RequestInfo : NSObject
{
    NSString *url;
    NSString *requestKey;
    NSString *openid;
    NSString *openKey;
    NSString *session_id;
    NSString *session_type;
    NSString *pf;
    NSString *pfkey;
    double ts;
    NSString *appid;
    NSString *productid;
    int producttype;
    NSString *payitem;
    NSData *receipt;
    NSString *billno;
    NSString *amt;
    int keyType;
    int changeKeyType;
    NSString *currencyType;
    NSString *from;
    NSString *zoneid;
    _Bool isChangeKey;
    _Bool isDepositGameCoin;
    NSString *varItem;
    NSString *applicationUserName;
    SKPaymentTransaction *skpaymentTransaction;
    SKProduct *product;
    int quantity;
    _Bool isReprovide;
    int productType;
    int _KeyType;
    NSDictionary *context;
    NSMutableArray *_provideProductIds;
    NSMutableDictionary *_dictFailedProductIds;
    NSDictionary *_provideDict;
    unsigned long long _launchGoodsSource;
    NSString *_cy;
    unsigned long long _homes;
}

@property(nonatomic) unsigned long long homes; // @synthesize homes=_homes;
@property(retain, nonatomic) NSString *cy; // @synthesize cy=_cy;
@property(nonatomic) unsigned long long launchGoodsSource; // @synthesize launchGoodsSource=_launchGoodsSource;
@property(nonatomic) int KeyType; // @synthesize KeyType=_KeyType;
@property(retain, nonatomic) NSDictionary *provideDict; // @synthesize provideDict=_provideDict;
@property(readonly, nonatomic) NSMutableDictionary *dictFailedProductIds; // @synthesize dictFailedProductIds=_dictFailedProductIds;
@property(readonly, nonatomic) NSMutableArray *provideProductIds; // @synthesize provideProductIds=_provideProductIds;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context;
@property(nonatomic) _Bool isReprovide; // @synthesize isReprovide;
@property(retain, nonatomic) SKProduct *Product; // @synthesize Product=product;
@property(retain, nonatomic) SKPaymentTransaction *SkpaymentTransaction; // @synthesize SkpaymentTransaction=skpaymentTransaction;
@property(copy, nonatomic) NSString *ApplicationUserName; // @synthesize ApplicationUserName=applicationUserName;
@property(retain, nonatomic) NSString *VarItem; // @synthesize VarItem=varItem;
@property(nonatomic) _Bool IsDepositGameCoin; // @synthesize IsDepositGameCoin=isDepositGameCoin;
@property(nonatomic) _Bool IsChangeKey; // @synthesize IsChangeKey=isChangeKey;
@property(retain, nonatomic) NSString *Zoneid; // @synthesize Zoneid=zoneid;
@property(readonly, nonatomic) int Quantity; // @synthesize Quantity=quantity;
@property(copy, nonatomic) NSString *CurrencyType; // @synthesize CurrencyType=currencyType;
@property(nonatomic) int ChangeKeyType; // @synthesize ChangeKeyType=changeKeyType;
@property(copy, nonatomic) NSString *Amt; // @synthesize Amt=amt;
@property(copy, nonatomic) NSString *Billno; // @synthesize Billno=billno;
@property(retain, nonatomic) NSData *Receipt; // @synthesize Receipt=receipt;
@property(retain, nonatomic) NSString *Payitem; // @synthesize Payitem=payitem;
@property(nonatomic) int ProductType; // @synthesize ProductType=productType;
@property(retain, nonatomic) NSString *Productid; // @synthesize Productid=productid;
@property(retain, nonatomic) NSString *Appid; // @synthesize Appid=appid;
@property(nonatomic) double Ts; // @synthesize Ts=ts;
@property(retain, nonatomic) NSString *Pfkey; // @synthesize Pfkey=pfkey;
@property(retain, nonatomic) NSString *Pf; // @synthesize Pf=pf;
@property(retain, nonatomic) NSString *Session_type; // @synthesize Session_type=session_type;
@property(retain, nonatomic) NSString *Session_id; // @synthesize Session_id=session_id;
@property(retain, nonatomic) NSString *OpenKey; // @synthesize OpenKey=openKey;
@property(retain, nonatomic) NSString *Openid; // @synthesize Openid=openid;
@property(copy, nonatomic) NSString *RequestKey; // @synthesize RequestKey=requestKey;
@property(copy, nonatomic) NSString *Url; // @synthesize Url=url;
- (void)dealloc;
- (id)init;

@end

