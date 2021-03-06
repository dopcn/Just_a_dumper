//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@interface SMUserTextView : UITextView
{
    _Bool _isSelectAll;
    double _cs_acceptEventInterval;
    double _cs_acceptEventTime;
}

@property(nonatomic) _Bool isSelectAll; // @synthesize isSelectAll=_isSelectAll;
@property(nonatomic) double cs_acceptEventTime; // @synthesize cs_acceptEventTime=_cs_acceptEventTime;
@property(nonatomic) double cs_acceptEventInterval; // @synthesize cs_acceptEventInterval=_cs_acceptEventInterval;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)selectAll:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

@end

