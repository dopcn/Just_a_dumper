//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSMutableArray, UIScrollView;
@protocol BMRouteForecastViewDelegate;

@interface BMRouteForecastView : UIImageView
{
    id <BMRouteForecastViewDelegate> _delegate;
    long long _currentRouteConditonType;
    UIScrollView *_scrollView;
    NSMutableArray *_btnArr;
    NSMutableArray *_spliteLineArr;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableArray *spliteLineArr; // @synthesize spliteLineArr=_spliteLineArr;
@property(retain, nonatomic) NSMutableArray *btnArr; // @synthesize btnArr=_btnArr;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long currentRouteConditonType; // @synthesize currentRouteConditonType=_currentRouteConditonType;
@property(nonatomic) __weak id <BMRouteForecastViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)getCurrentSel:(long long)arg1;
- (long long)getTag:(long long)arg1;
- (id)createLine;
- (void)btnClick:(id)arg1;
- (id)createBtn:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;

@end

