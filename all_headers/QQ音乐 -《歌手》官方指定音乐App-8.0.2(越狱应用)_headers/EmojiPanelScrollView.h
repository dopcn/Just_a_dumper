//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray;

@interface EmojiPanelScrollView : UIScrollView
{
    NSMutableArray *_accessibleElements;
    long long _currentPage;
}

@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibleElements;
- (_Bool)isAccessibilityElement;
- (void)updateAccessibleElements;
- (id)getEmotions;
- (id)initWithFrame:(struct CGRect)arg1;

@end

