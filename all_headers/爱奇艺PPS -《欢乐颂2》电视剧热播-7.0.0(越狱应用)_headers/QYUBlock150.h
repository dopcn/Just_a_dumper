//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUBaseBlock.h"

@class NSMutableArray, QYUBtnControl, QYUImageControl, QYUTextSimple;

@interface QYUBlock150 : QYUBaseBlock
{
    QYUImageControl *img0;
    QYUTextSimple *meta0;
    QYUTextSimple *meta1;
    QYUBtnControl *btn0;
    QYUBtnControl *btn1;
    NSMutableArray *btnidArr;
}

+ (double)getHeightByData:(id)arg1 rowWidth:(double)arg2;
+ (void)load;
- (void).cxx_destruct;
- (void)applyData;
- (id)realButtonsData:(id)arg1;
- (void)layoutSubviews;
- (void)initSubControls;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2;

@end

