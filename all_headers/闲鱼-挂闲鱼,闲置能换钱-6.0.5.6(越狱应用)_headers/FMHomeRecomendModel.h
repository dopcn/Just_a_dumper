//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;
@protocol FMHomeRecomendUserModel;

@interface FMHomeRecomendModel : NSObject
{
    NSMutableArray<FMHomeRecomendUserModel> *_users;
    NSString *_title;
    NSDictionary *_trackParams;
}

@property(copy, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray<FMHomeRecomendUserModel> *users; // @synthesize users=_users;
- (void).cxx_destruct;

@end

