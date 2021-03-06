//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTAlphaButton.h"

@class NSArray;

@interface TTMultiStateButton : TTAlphaButton
{
    long long _currentState;
    NSArray *_normalImageNames;
    NSArray *_pressImageNames;
}

@property(retain, nonatomic) NSArray *pressImageNames; // @synthesize pressImageNames=_pressImageNames;
@property(retain, nonatomic) NSArray *normalImageNames; // @synthesize normalImageNames=_normalImageNames;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (void)showCurrentState;
- (void)showNextImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

