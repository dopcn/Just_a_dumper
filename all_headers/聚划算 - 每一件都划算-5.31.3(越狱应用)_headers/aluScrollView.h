//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol aluScrollViewDelegate;

@interface aluScrollView : UIScrollView
{
    id <aluScrollViewDelegate> _aluScrollViewDelegate;
}

@property(nonatomic) __weak id <aluScrollViewDelegate> aluScrollViewDelegate; // @synthesize aluScrollViewDelegate=_aluScrollViewDelegate;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

