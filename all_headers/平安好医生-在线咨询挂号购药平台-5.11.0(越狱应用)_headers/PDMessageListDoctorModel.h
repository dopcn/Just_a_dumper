//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDMessageListModel.h"

@class NSString;

@interface PDMessageListDoctorModel : PDMessageListModel
{
    NSString *_doctorName;
    NSString *_doctorType;
}

@property(copy, nonatomic) NSString *doctorType; // @synthesize doctorType=_doctorType;
@property(copy, nonatomic) NSString *doctorName; // @synthesize doctorName=_doctorName;
- (void).cxx_destruct;
- (id)getMessageListTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

