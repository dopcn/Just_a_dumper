//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIScrollView, UIView;

@interface BDNCategoryScrollView : UIControl
{
    float _itemWidth;
    UIScrollView *_scrollView;
    UIView *_hightedLineView;
    unsigned long long _selectedControlIndex;
}

@property(nonatomic) unsigned long long selectedControlIndex; // @synthesize selectedControlIndex=_selectedControlIndex;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 items:(id)arg2;

@end

