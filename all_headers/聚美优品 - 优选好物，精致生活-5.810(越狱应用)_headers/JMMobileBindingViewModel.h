//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMBaseViewModel.h"

@class NSString, NSURL;

@interface JMMobileBindingViewModel : JMBaseViewModel
{
    int _time;
    NSURL *_headerImageURL;
    NSString *_title;
    NSString *_desc;
    NSString *_mobileNume;
    NSString *_verifyCode;
}

@property(nonatomic) int time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(copy, nonatomic) NSString *mobileNume; // @synthesize mobileNume=_mobileNume;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
- (void).cxx_destruct;

@end

