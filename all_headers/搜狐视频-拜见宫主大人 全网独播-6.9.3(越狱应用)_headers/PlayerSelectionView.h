//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface PlayerSelectionView : UIView
{
    int _selectIndex;
    NSArray *_titles;
    CDUnknownBlockType _click;
}

- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (id)createButtonWithTitle:(id)arg1;
- (void)addClickBlock:(CDUnknownBlockType)arg1;
- (void)updateWithTitles:(id)arg1 selectIndex:(int)arg2;

@end

