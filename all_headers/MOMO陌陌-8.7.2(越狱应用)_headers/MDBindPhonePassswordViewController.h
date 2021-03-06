//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDBindPhoneBaseViewController.h"

#import "MDCellSimilarViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MDBindPhoneHandler, NSString;

@interface MDBindPhonePassswordViewController : MDBindPhoneBaseViewController <UITextFieldDelegate, MDCellSimilarViewDelegate>
{
    MDBindPhoneHandler *_mDBindPhoneHandler;
}

@property(retain, nonatomic) MDBindPhoneHandler *mDBindPhoneHandler; // @synthesize mDBindPhoneHandler=_mDBindPhoneHandler;
- (void)requestSuccess:(id)arg1;
- (void)checkPassword:(id)arg1;
- (void)requestForgetPasswordAppconfigInfoError:(id)arg1;
- (void)requestForgetPasswordAppconfigInfoFail:(id)arg1;
- (void)requestForgetPasswordAppconfigInfoSuccess:(id)arg1;
- (void)didClickCellSimilarView:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)addCells;
- (void)nexButtonClicked;
- (void)retunButtonClicked;
- (void)initNavBar;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

