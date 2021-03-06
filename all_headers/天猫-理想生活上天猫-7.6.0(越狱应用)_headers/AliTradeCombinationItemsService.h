//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliDetailModelDelegate-Protocol.h"

@class AliDetailRequest, AliTradeCombinationItemsModel, NSString;

@interface AliTradeCombinationItemsService : NSObject <AliDetailModelDelegate>
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    AliDetailRequest *_request;
    AliTradeCombinationItemsModel *_combinationItemsModel;
}

@property(retain, nonatomic) AliTradeCombinationItemsModel *combinationItemsModel; // @synthesize combinationItemsModel=_combinationItemsModel;
@property(retain, nonatomic) AliDetailRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)modelDidCancelLoad;
- (void)modelDidFail:(id)arg1 withError:(id)arg2;
- (void)modelDidFinishLoad:(id)arg1;
- (void)cancel;
- (void)loadCombinationItemsWithItemId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

