//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ThirdControlFramework/JSONModel.h>

@class NSString;

@interface ACRecommendEditorModel : JSONModel
{
    NSString *_userId;
    NSString *_editorId;
    NSString *_iconUrl;
    NSString *_name;
    NSString *_visitCount;
    NSString *_blogId;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapperDict;
+ (id)keyMapper;
@property(copy, nonatomic) NSString *blogId; // @synthesize blogId=_blogId;
@property(copy, nonatomic) NSString *visitCount; // @synthesize visitCount=_visitCount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *editorId; // @synthesize editorId=_editorId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

