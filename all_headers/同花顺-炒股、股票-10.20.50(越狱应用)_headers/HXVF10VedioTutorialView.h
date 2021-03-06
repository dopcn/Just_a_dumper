//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HXVBasicComponentView.h"

@class NSString, UIButtonEnlarge, UILabel;
@protocol HXVF10VideoTutorialViewDelegate;

@interface HXVF10VedioTutorialView : HXVBasicComponentView
{
    NSString *_tutorialInfo;
    id <HXVF10VideoTutorialViewDelegate> _tutorialViewDelegate;
    UILabel *_tutorialInfoLabel;
    UIButtonEnlarge *_closeButton;
}

@property(retain, nonatomic) UIButtonEnlarge *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *tutorialInfoLabel; // @synthesize tutorialInfoLabel=_tutorialInfoLabel;
@property(nonatomic) __weak id <HXVF10VideoTutorialViewDelegate> tutorialViewDelegate; // @synthesize tutorialViewDelegate=_tutorialViewDelegate;
@property(copy, nonatomic) NSString *tutorialInfo; // @synthesize tutorialInfo=_tutorialInfo;
- (void).cxx_destruct;
- (void)selectClose;
- (id)initWithFrame:(struct CGRect)arg1;

@end

