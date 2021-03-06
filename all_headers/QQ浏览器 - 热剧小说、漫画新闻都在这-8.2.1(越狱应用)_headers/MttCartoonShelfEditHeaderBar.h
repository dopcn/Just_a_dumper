//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MttButton, UILabel;
@protocol MttCartoonShelfEditHeaderBarDelegate;

@interface MttCartoonShelfEditHeaderBar : UIView
{
    MttButton *_selectAllButton;
    UILabel *_selectedCountLabel;
    MttButton *_completeButton;
    id <MttCartoonShelfEditHeaderBarDelegate> _delegate;
}

@property(nonatomic) __weak id <MttCartoonShelfEditHeaderBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MttButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) UILabel *selectedCountLabel; // @synthesize selectedCountLabel=_selectedCountLabel;
@property(retain, nonatomic) MttButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
- (void).cxx_destruct;
- (void)onCompleteButton:(id)arg1;
- (void)onSelectAllButton:(id)arg1;
- (void)layoutSubviews;
- (void)refreshSkin;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

