//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel;

@interface MyTmallItemsContainerView : UIView
{
    NSMutableArray *_myTmallItemArray;
    UILabel *_title;
}

@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *myTmallItemArray; // @synthesize myTmallItemArray=_myTmallItemArray;
- (void).cxx_destruct;
- (void)reloadData;

@end

