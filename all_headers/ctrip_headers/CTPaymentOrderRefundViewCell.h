//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDateFormatter, NSMutableArray;

@interface CTPaymentOrderRefundViewCell : UITableViewCell
{
    NSDateFormatter *_dateFormaterIn;
    NSDateFormatter *_dateFormaterOut;
    NSMutableArray *_iconViews;
}

@property(retain, nonatomic) NSMutableArray *iconViews; // @synthesize iconViews=_iconViews;
@property(retain, nonatomic) NSDateFormatter *dateFormaterOut; // @synthesize dateFormaterOut=_dateFormaterOut;
@property(retain, nonatomic) NSDateFormatter *dateFormaterIn; // @synthesize dateFormaterIn=_dateFormaterIn;
- (void).cxx_destruct;
- (void)dealloc;
- (id)drawCircleOnView:(id)arg1 withStatus:(int)arg2 center:(struct CGPoint)arg3;
- (void)drawLineOnView:(id)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3 color:(struct CGColor *)arg4;
- (id)getTrimmedViewFromModel:(id)arg1;
- (id)getDateStringFromRawString:(id)arg1;
- (id)initCellWithInfo:(id)arg1;

@end

