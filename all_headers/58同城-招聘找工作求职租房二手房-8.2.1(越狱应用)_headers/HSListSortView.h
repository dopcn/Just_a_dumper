//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;
@protocol HSListSortViewProtocol;

@interface HSListSortView : UIView
{
    id <HSListSortViewProtocol> _delegate;
    NSMutableArray *_btnArr;
    NSMutableArray *_lineViewArr;
    UIView *_coverView;
    NSArray *_dataList;
    unsigned long long _style;
    UIView *_backView;
}

@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) NSMutableArray *lineViewArr; // @synthesize lineViewArr=_lineViewArr;
@property(retain, nonatomic) NSMutableArray *btnArr; // @synthesize btnArr=_btnArr;
@property(nonatomic) __weak id <HSListSortViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)disappearFromBaseView;
- (void)showInWindow;
- (void)sortBtnClick:(id)arg1;
- (void)addSingleLine;
- (void)configWithData:(id)arg1 andStyle:(unsigned long long)arg2;

@end

