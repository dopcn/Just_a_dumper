//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MDPersonalProfileCompletionRule : NSObject
{
    double _r_photo;
    double _r_interest;
    double _r_hangout;
    double _r_website;
    double _r_workSite;
    double _r_livingSite;
    double _r_sign;
    double _r_hometown;
    double _r_loveStatus;
    double _r_job;
    double _r_school;
    double _r_music;
    double _r_book;
    double _r_movie;
    double _r_userLabel;
}

+ (id)dictFromRule:(id)arg1;
+ (id)profileMap;
@property(nonatomic) double r_userLabel; // @synthesize r_userLabel=_r_userLabel;
@property(nonatomic) double r_movie; // @synthesize r_movie=_r_movie;
@property(nonatomic) double r_book; // @synthesize r_book=_r_book;
@property(nonatomic) double r_music; // @synthesize r_music=_r_music;
@property(nonatomic) double r_school; // @synthesize r_school=_r_school;
@property(nonatomic) double r_job; // @synthesize r_job=_r_job;
@property(nonatomic) double r_loveStatus; // @synthesize r_loveStatus=_r_loveStatus;
@property(nonatomic) double r_hometown; // @synthesize r_hometown=_r_hometown;
@property(nonatomic) double r_sign; // @synthesize r_sign=_r_sign;
@property(nonatomic) double r_livingSite; // @synthesize r_livingSite=_r_livingSite;
@property(nonatomic) double r_workSite; // @synthesize r_workSite=_r_workSite;
@property(nonatomic) double r_website; // @synthesize r_website=_r_website;
@property(nonatomic) double r_hangout; // @synthesize r_hangout=_r_hangout;
@property(nonatomic) double r_interest; // @synthesize r_interest=_r_interest;
@property(nonatomic) double r_photo; // @synthesize r_photo=_r_photo;
- (long long)calculateCompletionPercentWithProfile:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDic:(id)arg1;

@end

