//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMWealthCategoryInfoItem, NSMutableArray, NSString;

@interface IMWealthBarInfoItem : NSObject
{
    NSString *barId;
    NSString *barName;
    long long fansCount;
    long long topicCount;
    long long publicGroupCount;
    NSMutableArray *topArray;
    NSString *barIcon;
    NSMutableArray *hotArray;
    IMWealthCategoryInfoItem *categoryItem;
    long long barIsFollow;
    NSString *_iconURL;
    NSMutableArray *_categoryArray;
}

@property(retain, nonatomic) NSMutableArray *categoryArray; // @synthesize categoryArray=_categoryArray;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) long long barIsFollow; // @synthesize barIsFollow;
@property(retain, nonatomic) IMWealthCategoryInfoItem *categoryItem; // @synthesize categoryItem;
@property(retain, nonatomic) NSMutableArray *hotArray; // @synthesize hotArray;
@property(retain, nonatomic) NSString *barIcon; // @synthesize barIcon;
@property(retain, nonatomic) NSMutableArray *topArray; // @synthesize topArray;
@property(nonatomic) long long publicGroupCount; // @synthesize publicGroupCount;
@property(nonatomic) long long topicCount; // @synthesize topicCount;
@property(nonatomic) long long fansCount; // @synthesize fansCount;
@property(retain, nonatomic) NSString *barName; // @synthesize barName;
@property(retain, nonatomic) NSString *barId; // @synthesize barId;
- (void).cxx_destruct;
- (id)initWithWealthBarInfoEntityEntity:(id)arg1;

@end

