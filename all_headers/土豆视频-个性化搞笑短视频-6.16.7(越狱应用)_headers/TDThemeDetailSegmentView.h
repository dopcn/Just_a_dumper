//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TDThemeDetailSegmentView : UIView
{
    UILabel *_videoLabel;
    UILabel *_albumLabel;
    long long _currentType;
    UIView *_lineView;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) long long currentType; // @synthesize currentType=_currentType;
@property(retain, nonatomic) UILabel *albumLabel; // @synthesize albumLabel=_albumLabel;
@property(retain, nonatomic) UILabel *videoLabel; // @synthesize videoLabel=_videoLabel;
- (void).cxx_destruct;
- (void)changeCurrentType:(CDUnknownBlockType)arg1;
- (void)contentViewDidScroll:(id)arg1;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

