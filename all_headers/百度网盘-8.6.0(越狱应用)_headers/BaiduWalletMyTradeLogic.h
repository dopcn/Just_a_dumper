//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduWalletTradeOrderListRequest;

@interface BaiduWalletMyTradeLogic : NSObject
{
    BaiduWalletTradeOrderListRequest *_queryRequest;
}

+ (id)sharedLogic;
@property(retain, nonatomic) BaiduWalletTradeOrderListRequest *queryRequest; // @synthesize queryRequest=_queryRequest;
- (void).cxx_destruct;
- (void)cancelTradeQuery;
- (void)orderDetail:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)orderDel:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)tradeQuery:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)recvAction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)cancelTradeRequest:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)cancelTransAccount:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

