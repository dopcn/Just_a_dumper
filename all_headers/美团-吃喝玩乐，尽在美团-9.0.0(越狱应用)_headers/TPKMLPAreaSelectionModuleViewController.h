//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SAKPortalable-Protocol.h"

@class NSString, TPKMLPAreaSelectionContainerView, TPKMLPAreaSelectionModuleViewModel;

@interface TPKMLPAreaSelectionModuleViewController : UIViewController <SAKPortalable>
{
    TPKMLPAreaSelectionModuleViewModel *_viewModel;
    TPKMLPAreaSelectionContainerView *_containerView;
}

@property(retain, nonatomic) TPKMLPAreaSelectionContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TPKMLPAreaSelectionModuleViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;
- (id)pageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

