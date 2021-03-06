//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGStoryFullscreenOwnerFooterViewType-Protocol.h"

@class IGStoryViewerFacepileViewersButton, IGStoryViewerLabeledFooterButton, NSString;
@protocol IGStoryFullscreenOwnerFooterViewDelegate;

@interface IGStoryFullscreenOwnerLabeledFooterView : UIView <IGStoryFullscreenOwnerFooterViewType>
{
    IGStoryViewerLabeledFooterButton *_archiveReshareButton;
    id <IGStoryFullscreenOwnerFooterViewDelegate> _delegate;
    long long _style;
    IGStoryViewerLabeledFooterButton *_highlightButton;
    IGStoryViewerLabeledFooterButton *_labeledMoreOptionsButton;
    IGStoryViewerLabeledFooterButton *_cameraButton;
    IGStoryViewerFacepileViewersButton *_facepileViewersButton;
}

@property(readonly, nonatomic) IGStoryViewerFacepileViewersButton *facepileViewersButton; // @synthesize facepileViewersButton=_facepileViewersButton;
@property(readonly, nonatomic) IGStoryViewerLabeledFooterButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(readonly, nonatomic) IGStoryViewerLabeledFooterButton *labeledMoreOptionsButton; // @synthesize labeledMoreOptionsButton=_labeledMoreOptionsButton;
@property(readonly, nonatomic) IGStoryViewerLabeledFooterButton *highlightButton; // @synthesize highlightButton=_highlightButton;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <IGStoryFullscreenOwnerFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapArchiveReshareButton:(id)arg1;
- (void)didTapHighlightButton:(id)arg1;
- (void)didTapCameraButton:(id)arg1;
- (void)didTapMoreOptionButton:(id)arg1;
- (void)didTapViewersButton:(id)arg1;
- (void)configureWithViewModel:(id)arg1 userSession:(id)arg2;
- (id)viewersButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

