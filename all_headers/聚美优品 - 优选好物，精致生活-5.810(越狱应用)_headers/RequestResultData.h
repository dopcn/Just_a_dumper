//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RequestResultData : NSObject
{
    NSString *mstate;
    NSString *mmsg;
    long long merror_Code;
    _Bool mNoShowTip;
    _Bool mNoShowSystemTip;
    int mConfirm;
    int mSelectConfirm;
}

+ (id)CreateInstance;
@property(nonatomic) int mSelectConfirm; // @synthesize mSelectConfirm;
@property(nonatomic) _Bool mNoShowSystemTip; // @synthesize mNoShowSystemTip;
@property(nonatomic) _Bool mNoShowTip; // @synthesize mNoShowTip;
@property(nonatomic) long long merror_Code; // @synthesize merror_Code;
@property(retain, nonatomic) NSString *mmsg; // @synthesize mmsg;
@property(retain, nonatomic) NSString *mstate; // @synthesize mstate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isSuccess;
- (id)init;

@end

