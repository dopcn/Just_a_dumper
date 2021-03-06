//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol GJGCIMMsgBoxHeaderViewDelegate;

@interface GJGCIMMsgBoxHeaderView : UIView
{
    id <GJGCIMMsgBoxHeaderViewDelegate> _delegate;
    NSMutableArray *_icons;
    NSMutableArray *_buttons;
    NSMutableArray *_labels;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(nonatomic) __weak id <GJGCIMMsgBoxHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)titleWithIndex:(long long)arg1;
- (id)iconNameWithIndex:(long long)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)showDot:(_Bool)arg1 atIndex:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

