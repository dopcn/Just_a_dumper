//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIActionSheetDelegate-Protocol.h"

@class NSArray, NSString, UIViewController;

@interface ActionSheetObject : NSObject <UIActionSheetDelegate>
{
    CDStruct_4a9aa5a8 *_imageRule;
    UIViewController *_vc;
    NSArray *_photos;
    CDUnknownBlockType _resultBlock;
}

@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)dealloc;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

