//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchBar.h>

@class UIColor, UIView;

@interface SDFeedSearchBar : UISearchBar
{
    UIColor *_cursorTintColor;
    UIView *_searchTextField;
}

@property(nonatomic) __weak UIView *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) UIColor *cursorTintColor; // @synthesize cursorTintColor=_cursorTintColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

