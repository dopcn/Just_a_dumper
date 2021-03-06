//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class JUShareActivityContentView, NSArray;

@interface JHSShareScrollView : UIScrollView
{
    JUShareActivityContentView *_contentView;
    NSArray *_optionMenus;
}

@property(retain, nonatomic) NSArray *optionMenus; // @synthesize optionMenus=_optionMenus;
@property(nonatomic) __weak JUShareActivityContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didTapOnOptionMenu:(id)arg1;
- (id)menuButtonWithSceneOption:(id)arg1;
- (void)presentOnOptionMenusWithSceneOptions:(id)arg1;
- (void)disposeShareOptionMenus;

@end

