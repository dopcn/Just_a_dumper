//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "SAKPortalable-Protocol.h"

@class METNewBusinessService, MTSegmentedControl, NSMutableArray, NSString, UIButton, UIImageView;

@interface METReserveOrderViewController : MTBaseViewController <SAKPortalable>
{
    MTSegmentedControl *_segmentedControl;
    UIImageView *_segmentedControlContainerView;
    NSMutableArray *_childViewControllerArray;
    UIButton *_editButton;
    METNewBusinessService *_theNewBusinessService;
}

@property(retain, nonatomic) METNewBusinessService *theNewBusinessService; // @synthesize theNewBusinessService=_theNewBusinessService;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) NSMutableArray *childViewControllerArray; // @synthesize childViewControllerArray=_childViewControllerArray;
@property(retain, nonatomic) UIImageView *segmentedControlContainerView; // @synthesize segmentedControlContainerView=_segmentedControlContainerView;
@property(retain, nonatomic) MTSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)setPageTackParameter;
- (void)toggleEditing:(id)arg1;
- (void)setEditButtonEnableState:(_Bool)arg1;
- (void)didReceiveSegmentChanged;
- (void)updateUI;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)refresh;
- (id)identifierURLString;
- (id)rootViewControllerClassName;
- (id)pageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

