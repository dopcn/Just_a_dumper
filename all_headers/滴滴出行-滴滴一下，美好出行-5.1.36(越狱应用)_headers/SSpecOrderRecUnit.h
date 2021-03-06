//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SOrderRecCom.h"

@interface SSpecOrderRecUnit : SOrderRecCom
{
    _Bool _orderRecovering;
    _Bool _forceRecover;
}

@property(nonatomic) _Bool forceRecover; // @synthesize forceRecover=_forceRecover;
@property(nonatomic) _Bool orderRecovering; // @synthesize orderRecovering=_orderRecovering;
- (void)handleHistoryOrder:(id)arg1;
- (void)handleFromOrderList:(id)arg1;
- (void)handleRecoveOrder:(id)arg1;
- (void)restoreOrderWithOrder:(id)arg1 from:(long long)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)restoreOrderWithOrderDetail:(id)arg1 from:(long long)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)restoreOrderWithOrder:(id)arg1 from:(long long)arg2;
- (void)confirmRecoverOrder:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)handleMainMenuOrder:(id)arg1;
- (void)handleRecoverOrder:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

