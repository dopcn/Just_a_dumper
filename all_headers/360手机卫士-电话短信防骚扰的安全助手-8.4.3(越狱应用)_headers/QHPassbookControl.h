//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QHCreatePasswordViewControllerDelegate-Protocol.h"

@class NSString, QHCreatePasswordViewController;

@interface QHPassbookControl : NSObject <QHCreatePasswordViewControllerDelegate>
{
    QHCreatePasswordViewController *_createVC;
}

+ (id)passbookResetViewController;
+ (id)passbookLoginViewController;
@property(nonatomic) __weak QHCreatePasswordViewController *createVC; // @synthesize createVC=_createVC;
- (void).cxx_destruct;
- (void)popAndShowSuccess;
- (void)updateAllUserInfosDone;
- (void)userDidFailToSetPassword:(id)arg1 ofType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

