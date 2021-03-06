//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MUIQuickEntrance, UIButton;

@interface TPKCommonNavigationRightView : UIView
{
    _Bool _reportButtonShouldShown;
    _Bool _shareButtonHidden;
    _Bool _collectButtonHidden;
    MUIQuickEntrance *_quickEntrance;
    UIButton *_collectButton;
    UIButton *_shareButton;
    UIButton *_reportButton;
}

@property(retain, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *collectButton; // @synthesize collectButton=_collectButton;
@property(nonatomic) _Bool collectButtonHidden; // @synthesize collectButtonHidden=_collectButtonHidden;
@property(nonatomic) _Bool shareButtonHidden; // @synthesize shareButtonHidden=_shareButtonHidden;
@property(nonatomic) _Bool reportButtonShouldShown; // @synthesize reportButtonShouldShown=_reportButtonShouldShown;
@property(retain, nonatomic) MUIQuickEntrance *quickEntrance; // @synthesize quickEntrance=_quickEntrance;
- (void).cxx_destruct;
- (void)refreshConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

