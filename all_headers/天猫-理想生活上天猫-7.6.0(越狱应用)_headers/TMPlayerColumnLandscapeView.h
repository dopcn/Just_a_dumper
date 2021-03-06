//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTOPRequest, NSMutableArray, UIScrollView;
@protocol TMPlayerColumnLandscapeViewDelegate;

@interface TMPlayerColumnLandscapeView : UIView
{
    id <TMPlayerColumnLandscapeViewDelegate> _delegate;
    UIScrollView *_scrollView;
    NSMutableArray *_columnViewArray;
    NSMutableArray *_columnItemArray;
    MTOPRequest *_request;
    long long _currectColumnIndex;
}

@property(nonatomic) long long currectColumnIndex; // @synthesize currectColumnIndex=_currectColumnIndex;
@property(retain, nonatomic) MTOPRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableArray *columnItemArray; // @synthesize columnItemArray=_columnItemArray;
@property(retain, nonatomic) NSMutableArray *columnViewArray; // @synthesize columnViewArray=_columnViewArray;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <TMPlayerColumnLandscapeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)columnCellClicked:(id)arg1;
- (void)handleData:(id)arg1;
- (void)loadColumnDataWithColumnId:(id)arg1 withCid:(id)arg2;
- (id)init;

@end

