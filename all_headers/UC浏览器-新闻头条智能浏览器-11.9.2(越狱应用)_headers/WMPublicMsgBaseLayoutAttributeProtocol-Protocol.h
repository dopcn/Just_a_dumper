//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WMTextCacheInfo;
@protocol WMPublicMsgDataProtocol;

@protocol WMPublicMsgBaseLayoutAttributeProtocol <NSObject>
@property(nonatomic) _Bool bottomBlock;
@property(nonatomic) _Bool topBlock;
- (void)wm_reset;
- (double)heightForLayoutWithData:(id <WMPublicMsgDataProtocol>)arg1;
- (void)configureTextCacheInfo:(WMTextCacheInfo *)arg1 withData:(id <WMPublicMsgDataProtocol>)arg2;
@end

