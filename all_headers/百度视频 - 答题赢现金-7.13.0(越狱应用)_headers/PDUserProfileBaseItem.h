//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDBaseItem.h"

@class NSArray, NSNumber, NSString;

@interface PDUserProfileBaseItem : PDBaseItem
{
    NSString *_uId;
    NSString *_nickName;
    NSString *_sex;
    NSString *_position;
    NSNumber *_bolHidePosition;
    NSString *_positionArea;
    NSString *_portraitUrl;
    NSString *_stag;
    NSNumber *_stagUsedNum;
    NSNumber *_os;
    NSNumber *_bolNew;
    NSNumber *_cTime;
    NSString *_career;
    NSString *_age;
    NSString *_horoscope;
    NSArray *_photoList;
    NSString *_phoneNum;
    NSNumber *_bbid;
    NSString *_distance;
    NSString *_homeFirst;
    NSString *_homeSecond;
    NSString *_schoolName;
    NSString *_schoolEnrollment;
    NSString *_feed;
    NSNumber *_realPortrait;
    NSNumber *_hasCertificate;
    NSString *_certPhoneNum;
}

@property(retain, nonatomic) NSString *certPhoneNum; // @synthesize certPhoneNum=_certPhoneNum;
@property(retain, nonatomic) NSNumber *hasCertificate; // @synthesize hasCertificate=_hasCertificate;
@property(retain, nonatomic) NSNumber *realPortrait; // @synthesize realPortrait=_realPortrait;
@property(retain, nonatomic) NSString *feed; // @synthesize feed=_feed;
@property(retain, nonatomic) NSString *schoolEnrollment; // @synthesize schoolEnrollment=_schoolEnrollment;
@property(retain, nonatomic) NSString *schoolName; // @synthesize schoolName=_schoolName;
@property(retain, nonatomic) NSString *homeSecond; // @synthesize homeSecond=_homeSecond;
@property(retain, nonatomic) NSString *homeFirst; // @synthesize homeFirst=_homeFirst;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSNumber *bbid; // @synthesize bbid=_bbid;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(retain, nonatomic) NSArray *photoList; // @synthesize photoList=_photoList;
@property(retain, nonatomic) NSString *horoscope; // @synthesize horoscope=_horoscope;
@property(retain, nonatomic) NSString *age; // @synthesize age=_age;
@property(retain, nonatomic) NSString *career; // @synthesize career=_career;
@property(retain, nonatomic) NSNumber *cTime; // @synthesize cTime=_cTime;
@property(retain, nonatomic) NSNumber *bolNew; // @synthesize bolNew=_bolNew;
@property(retain, nonatomic) NSNumber *os; // @synthesize os=_os;
@property(retain, nonatomic) NSNumber *stagUsedNum; // @synthesize stagUsedNum=_stagUsedNum;
@property(retain, nonatomic) NSString *stag; // @synthesize stag=_stag;
@property(retain, nonatomic) NSString *portraitUrl; // @synthesize portraitUrl=_portraitUrl;
@property(retain, nonatomic) NSString *positionArea; // @synthesize positionArea=_positionArea;
@property(retain, nonatomic) NSNumber *bolHidePosition; // @synthesize bolHidePosition=_bolHidePosition;
@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *uId; // @synthesize uId=_uId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

