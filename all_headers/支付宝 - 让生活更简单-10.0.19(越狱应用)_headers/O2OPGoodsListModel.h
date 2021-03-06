//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class NSArray, NSDictionary, NSString;

@interface O2OPGoodsListModel : O2OMistModel
{
    NSString *_shopId;
    NSString *_type;
    NSArray *_listInfos;
    NSDictionary *_monitorDict;
    NSDictionary *_extInfo;
}

@property(copy, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSDictionary *monitorDict; // @synthesize monitorDict=_monitorDict;
@property(retain, nonatomic) NSArray *listInfos; // @synthesize listInfos=_listInfos;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (_Bool)shouldDowngrade;
- (id)templateConfig;
- (_Bool)handleTemplatesCompletion:(id)arg1 failedItems:(id)arg2 err:(id)arg3;
- (_Bool)raise1002Exception;
- (id)operationType;
- (id)responseObjects:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;

@end

