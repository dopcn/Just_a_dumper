//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseTransferHandler.h"

@class WBJobLeadUtils;

@interface JobTransferHandler : WBBaseTransferHandler
{
    WBJobLeadUtils *_leadUtils;
}

+ (_Bool)dispatchActionSupinList:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) WBJobLeadUtils *leadUtils; // @synthesize leadUtils=_leadUtils;
- (void).cxx_destruct;
- (void)showPublishB:(id)arg1;
- (id)dispatchAction:(id)arg1;
- (id)init;

@end

