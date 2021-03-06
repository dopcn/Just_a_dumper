//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CTTrainWebDataModel : NSObject
{
    _Bool _closeVisible;
    _Bool _refreshVisible;
    int _closeAction;
    int _webViewType;
    NSString *_title;
    NSString *_cookies;
    NSString *_url;
    NSString *_method;
    NSDictionary *_postParams;
    NSString *_js;
    NSArray *_interceptFlags;
    NSString *_baseURL;
    NSString *_html;
    NSString *_userAgent;
}

@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSString *html; // @synthesize html=_html;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSArray *interceptFlags; // @synthesize interceptFlags=_interceptFlags;
@property(retain, nonatomic) NSString *js; // @synthesize js=_js;
@property(retain, nonatomic) NSDictionary *postParams; // @synthesize postParams=_postParams;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *cookies; // @synthesize cookies=_cookies;
@property(nonatomic) _Bool refreshVisible; // @synthesize refreshVisible=_refreshVisible;
@property(nonatomic) _Bool closeVisible; // @synthesize closeVisible=_closeVisible;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int webViewType; // @synthesize webViewType=_webViewType;
@property(nonatomic) int closeAction; // @synthesize closeAction=_closeAction;
- (void).cxx_destruct;
- (id)init;

@end

