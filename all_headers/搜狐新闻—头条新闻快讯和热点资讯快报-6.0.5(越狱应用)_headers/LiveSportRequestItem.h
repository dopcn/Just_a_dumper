//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RequestItem.h"

@class NSString;

@interface LiveSportRequestItem : RequestItem
{
    NSString *_liveSportID;
    NSString *_cateCode;
    NSString *_columnID;
    NSString *_liveCategoryID;
}

@property(retain, nonatomic) NSString *liveCategoryID; // @synthesize liveCategoryID=_liveCategoryID;
@property(retain, nonatomic) NSString *columnID; // @synthesize columnID=_columnID;
@property(retain, nonatomic) NSString *cateCode; // @synthesize cateCode=_cateCode;
@property(retain, nonatomic) NSString *liveSportID; // @synthesize liveSportID=_liveSportID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

