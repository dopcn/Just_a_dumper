//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SearchPeopleInfo : NSObject
{
    NSString *_pid;
    NSString *_title;
    NSString *_birthDate;
    NSString *_coverPic;
    NSString *_birthPlace;
    NSString *_gender;
    NSString *_prof;
    NSString *_briefIntroduction;
}

@property(retain, nonatomic) NSString *briefIntroduction; // @synthesize briefIntroduction=_briefIntroduction;
@property(retain, nonatomic) NSString *prof; // @synthesize prof=_prof;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *birthPlace; // @synthesize birthPlace=_birthPlace;
@property(retain, nonatomic) NSString *coverPic; // @synthesize coverPic=_coverPic;
@property(retain, nonatomic) NSString *birthDate; // @synthesize birthDate=_birthDate;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;

@end

