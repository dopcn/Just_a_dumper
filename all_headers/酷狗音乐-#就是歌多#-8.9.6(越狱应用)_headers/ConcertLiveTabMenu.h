//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol ConcertMenuDelegate;

@interface ConcertLiveTabMenu : UIView
{
    id <ConcertMenuDelegate> _delegate;
    UIView *_bottomoLine;
    UIView *_selectedLine;
    UIButton *_selectedBtn;
    UIButton *_subscribeBtn;
}

@property(retain, nonatomic) UIButton *subscribeBtn; // @synthesize subscribeBtn=_subscribeBtn;
@property(retain, nonatomic) UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) UIView *selectedLine; // @synthesize selectedLine=_selectedLine;
@property(retain, nonatomic) UIView *bottomoLine; // @synthesize bottomoLine=_bottomoLine;
@property(nonatomic) __weak id <ConcertMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)menuClicked:(id)arg1;
- (void)buttonWithName:(id)arg1 type:(int)arg2;
- (void)subscribeSuccess;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)ScrollViewDidScroll:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

