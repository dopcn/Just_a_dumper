//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface BMRouteInputEntityMode : NSObject
{
    _Bool _mShowMyLoc;
    _Bool _mShowHistory;
    UIImage *_mImg;
    NSString *_mHolderString;
    NSString *_mTxt;
}

+ (id)makeModeFromDic:(id)arg1;
@property(copy, nonatomic) NSString *mTxt; // @synthesize mTxt=_mTxt;
@property(copy, nonatomic) NSString *mHolderString; // @synthesize mHolderString=_mHolderString;
@property(retain, nonatomic) UIImage *mImg; // @synthesize mImg=_mImg;
@property(nonatomic) _Bool mShowHistory; // @synthesize mShowHistory=_mShowHistory;
@property(nonatomic) _Bool mShowMyLoc; // @synthesize mShowMyLoc=_mShowMyLoc;
- (void).cxx_destruct;

@end

