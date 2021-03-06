//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@interface MttWKAlertViewController : UIAlertController
{
    _Bool _isHandleCalled;
    CDUnknownBlockType _wkAlertCompletionHandle;
    CDUnknownBlockType _wkConfirmCompletionHandle;
    CDUnknownBlockType _wkTextInputCompletionHandle;
}

@property(nonatomic) _Bool isHandleCalled; // @synthesize isHandleCalled=_isHandleCalled;
@property(copy, nonatomic) CDUnknownBlockType wkTextInputCompletionHandle; // @synthesize wkTextInputCompletionHandle=_wkTextInputCompletionHandle;
@property(copy, nonatomic) CDUnknownBlockType wkConfirmCompletionHandle; // @synthesize wkConfirmCompletionHandle=_wkConfirmCompletionHandle;
@property(copy, nonatomic) CDUnknownBlockType wkAlertCompletionHandle; // @synthesize wkAlertCompletionHandle=_wkAlertCompletionHandle;
- (void).cxx_destruct;
- (void)dealloc;
- (void)createContentWithWKTextInputPanelCompletionHandle:(CDUnknownBlockType)arg1 defaultText:(id)arg2;
- (void)createContentWithWKConfirmPanelCompletionHandle:(CDUnknownBlockType)arg1;
- (void)createContentWithWKAlertCompletionHandle:(CDUnknownBlockType)arg1;

@end

