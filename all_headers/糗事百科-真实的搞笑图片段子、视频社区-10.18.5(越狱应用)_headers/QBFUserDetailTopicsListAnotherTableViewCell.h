//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBBaseCellContentView.h"

@class NSArray, UIImageView, UIView;

@interface QBFUserDetailTopicsListAnotherTableViewCell : QBBaseCellContentView
{
    UIImageView *_quoteView;
    NSArray *_iconViews;
    UIImageView *_arrowView;
    UIView *_bottomLineView;
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) NSArray *iconViews; // @synthesize iconViews=_iconViews;
@property(retain, nonatomic) UIImageView *quoteView; // @synthesize quoteView=_quoteView;
- (void).cxx_destruct;
- (void)loadThemeResource;
- (void)themeWillChanged;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

