//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FashionContentView, NSMutableArray;

@interface AnimationView : UIView
{
    FashionContentView *_firstView;
    FashionContentView *_secondView;
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) FashionContentView *secondView; // @synthesize secondView=_secondView;
@property(retain, nonatomic) FashionContentView *firstView; // @synthesize firstView=_firstView;
- (void).cxx_destruct;
- (void)stopGifAimation;
- (void)startGifAimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

